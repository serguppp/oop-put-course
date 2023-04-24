#include <sstream>
#include <iostream>
#include <assert.h>
#include <memory>

class Sequence {
public:
	virtual int Length() = 0;
};

class FakeSequence : public Sequence {
public:
	int Length() override { return 100; }
};

class Gene {
private:
	std::string name_;
	std::shared_ptr<Sequence> sequence_;
public:
	Gene(std::string name, std::shared_ptr<Sequence> sequence) :
		name_(name), sequence_(sequence) {}
	std::string JSON() {
		std::stringstream ss;
		ss << "{";
		ss << "\"name\": \"" << name_ << "\",";
		ss << "\"length\": " << sequence_->Length() << "";
		ss << "}";
		return ss.str();
	}
};

int main()
{
	std::shared_ptr<Sequence> fakeSequence = std::make_shared<FakeSequence>();
	Gene gene("BALF5", fakeSequence);
	std::cout << gene.JSON();
	assert(fakeSequence->Length() == 100);
}


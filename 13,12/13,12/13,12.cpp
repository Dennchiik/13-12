#include <iostream>
#include <string>

class Contact {
private:
    std::string* fullName;
    std::string homePhone;
    std::string workPhone;
    std::string mobilePhone;
    std::string additionalInfo;

public:
    Contact(const std::string& name, const std::string& home, const std::string& work,
        const std::string& mobile, const std::string& additional)
        : fullName(new std::string(name)), homePhone(home), workPhone(work),
        mobilePhone(mobile), additionalInfo(additional) {}

    ~Contact() {
        delete fullName;
    }

    const std::string& getFullName() const {
        return *fullName;
    }

    const std::string& getHomePhone() const {
        return homePhone;
    }

    const std::string& getWorkPhone() const {
        return workPhone;
    }

    const std::string& getMobilePhone() const {
        return mobilePhone;
    }

    const std::string& getAdditionalInfo() const {
        return additionalInfo;
    }

    void setFullName(const std::string& name) {
        *fullName = name;
    }

    void setHomePhone(const std::string& home) {
        homePhone = home;
    }

    void setWorkPhone(const std::string& work) {
        workPhone = work;
    }

    void setMobilePhone(const std::string& mobile) {
        mobilePhone = mobile;
    }

    void setAdditionalInfo(const std::string& additional) {
        additionalInfo = additional;
    }
};

int main() {
    Contact contact("Иван Иванов", "123456789", "987654321", "999888777", "Дополнительная информация");

    std::cout << "Имя: " << contact.getFullName() << std::endl;
    std::cout << "Домашний телефон: " << contact.getHomePhone() << std::endl;
    std::cout << "Рабочий телефон: " << contact.getWorkPhone() << std::endl;
    std::cout << "Мобильный телефон: " << contact.getMobilePhone() << std::endl;
    std::cout << "Дополнительная информация: " << contact.getAdditionalInfo() << std::endl;

    contact.setFullName("Петр Петров");
    contact.setMobilePhone("111222333");

    std::cout << "\nИзмененные данные:" << std::endl;
    std::cout << "Имя: " << contact.getFullName() << std::endl;
    std::cout << "Мобильный телефон: " << contact.getMobilePhone() << std::endl;

    return 0;
}

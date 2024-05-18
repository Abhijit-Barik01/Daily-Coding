#include<iostream>
using namespace std;

class Notifications{
    public:
     virtual void notifications() const =0;

     virtual~Notifications()
     {
        std::cout<<"base gone";
     }
};

class EmailNotifications : public Notifications{
    public:
        void notifications() const override{
            std::cout  <<" Email notifications" <<std::endl;

        }
        ~EmailNotifications(){std::cout<<"email gone";}
};

class SMSNotifications : public Notifications{
    public:
        void notifications() const override{
            std::cout  <<" SMS notifications" <<std::endl;

        }
        ~SMSNotifications(){std::cout<<"SMS gone";}
};

class DependencyInversion{
    private:
    const Notifications* notification;
    public:
    DependencyInversion(Notifications* notification):notification(notification){};
    void send()
    {
        notification->notifications();
    }



};
int main()
{
    EmailNotifications* emailNotification = new EmailNotifications();
    SMSNotifications* smsNotification = new SMSNotifications() ;

      DependencyInversion  emailService(emailNotification);


      DependencyInversion  smsService(smsNotification);

      emailService.send();
      smsService.send();
      delete emailNotification;
      delete smsNotification;
     
return 0;
}
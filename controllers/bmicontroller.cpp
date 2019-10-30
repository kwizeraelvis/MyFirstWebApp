#include "bmicontroller.h"

void BmiController::doGet(CWF::Request &request, CWF::Response &response)const {
    QJsonObject json;
    User user;

    request.fillQObject(&user);

    json["bmi"] = user.getBMI();
    json["name"] = user.getName();
    json["category"] = user.getCategory();
    json["mass"] = user.getMass();
    json["height"] = user.getHeight();


    response.write(json);
}

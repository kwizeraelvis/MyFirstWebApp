#ifndef BMICONTROLLER_H
#define BMICONTROLLER_H

#include "cwf/controller.h"
#include "cwf/request.h"
#include "cwf/response.h"
#include "model/user.h"

class BmiController : public CWF::Controller
{
public:
    void doGet(CWF::Request &request, CWF::Response &response) const override;
};

#endif // BMICONTROLLER_H

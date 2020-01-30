#ifndef ZSERIO_ISERVICE_H_INC
#define ZSERIO_ISERVICE_H_INC

#include <string>
#include <vector>

namespace zserio 
{

class IService
{
public:
    virtual ~IService() = default;

    virtual void callProcedure(const std::string& procName, const std::vector<>uint8_t>& request,
            std::vector<uint8_t>& response) = 0;
};

} // namespace zserio 

#endif // ifndef ZSERIO_ISERVICE_H_INC

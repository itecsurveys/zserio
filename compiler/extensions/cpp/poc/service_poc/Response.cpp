/**
 * Automatically generated by Zserio C++ extension version 1.4.0-pre2.
 */

#include <zserio/StringConvertUtil.h>
#include <zserio/CppRuntimeException.h>
#include <zserio/HashCodeUtil.h>
#include <zserio/BitPositionUtil.h>
#include <zserio/BitSizeOfCalculator.h>
#include <zserio/BitFieldUtil.h>

#include <service_types/simple_service/Response.h>

namespace service_types
{
namespace simple_service
{

Response::Response() noexcept :
        m_value_(uint64_t())
{
}

Response::Response(::zserio::BitStreamReader& in) :
        m_value_(readValue(in))
{
}

uint64_t Response::getValue() const
{
    return m_value_;
}

void Response::setValue(uint64_t value_)
{
    m_value_ = value_;
}

size_t Response::bitSizeOf(size_t bitPosition) const
{
    size_t endBitPosition = bitPosition;

    endBitPosition += UINT8_C(64);

    return endBitPosition - bitPosition;
}

size_t Response::initializeOffsets(size_t bitPosition)
{
    size_t endBitPosition = bitPosition;

    endBitPosition += UINT8_C(64);

    return endBitPosition;
}

bool Response::operator==(const Response& other) const
{
    if (this != &other)
    {
        return
                (m_value_ == other.m_value_);
    }

    return true;
}

int Response::hashCode() const
{
    int result = ::zserio::HASH_SEED;

    result = ::zserio::calcHashCode(result, m_value_);

    return result;
}

void Response::read(::zserio::BitStreamReader& in)
{
    m_value_ = readValue(in);
}

void Response::write(::zserio::BitStreamWriter& out, ::zserio::PreWriteAction)
{
    out.writeBits64(m_value_, UINT8_C(64));
}

uint64_t Response::readValue(::zserio::BitStreamReader& in)
{
    return static_cast<uint64_t>(in.readBits64(UINT8_C(64)));
}

} // namespace simple_service
} // namespace service_types


#ifndef PRJ_NS1_NS2_CLASS_HPP
#define PRJ_NS1_NS2_CLASS_HPP

namespace ns1 {
namespace ns2 {

class IInterface1
{
public:
  virtual ~IInterface1() = default;
};

class IInterface11
{
public:
  virtual ~IInterface11() = 0;
  
protected:
  explicit IInterface11() = default;

};

inline constexpr IInterface11::~IInterface11() {}

} // namespace ns2
} // namespace ns1

#endif // PRJ_NS1_NS2_CLASS_HPP

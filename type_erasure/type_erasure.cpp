#include <functional>
#include <string>

namespace erasure {

class IPublishSubscribe {
public:
  template <typename T>
  virtual void publish(T &&data, const std::string &channel_name) = 0;

  template <typename T>
  using Callback =
      std::function<void(const T &data, const std::string &channel_name)>;

  template <typename T>
  void subscribe(const std::string &channel_name, const Callback<T> &callback);
};

} // namespace erasure
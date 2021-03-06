#pragma once

#include "envoy/local_info/local_info.h"

namespace LocalInfo {

class MockLocalInfo : public LocalInfo {
public:
  MockLocalInfo();
  ~MockLocalInfo();

  MOCK_CONST_METHOD0(address, std::string&());
  MOCK_CONST_METHOD0(zoneName, std::string&());
  MOCK_CONST_METHOD0(clusterName, std::string&());
  MOCK_CONST_METHOD0(nodeName, std::string&());

  std::string address_{"127.0.0.1"};
  std::string zone_name_{"zone_name"};
  std::string cluster_name_{"cluster_name"};
  std::string node_name_{"node_name"};
};

} // LocalInfo

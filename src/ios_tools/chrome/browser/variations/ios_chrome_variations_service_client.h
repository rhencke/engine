// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_CHROME_BROWSER_VARIATIONS_IOS_CHROME_VARIATIONS_SERVICE_CLIENT_H_
#define IOS_CHROME_BROWSER_VARIATIONS_IOS_CHROME_VARIATIONS_SERVICE_CLIENT_H_

#include "base/macros.h"
#include "components/variations/service/variations_service_client.h"

// IOSChromeVariationsServiceClient provides an implementation of
// VariationsServiceClient that depends on ios/chrome/.
class IOSChromeVariationsServiceClient
    : public variations::VariationsServiceClient {
 public:
  IOSChromeVariationsServiceClient();
  ~IOSChromeVariationsServiceClient() override;

 private:
  // variations::VariationsServiceClient implementation.
  std::string GetApplicationLocale() override;
  base::SequencedWorkerPool* GetBlockingPool() override;
  base::Callback<base::Version()> GetVersionForSimulationCallback() override;
  net::URLRequestContextGetter* GetURLRequestContext() override;
  network_time::NetworkTimeTracker* GetNetworkTimeTracker() override;
  version_info::Channel GetChannel() override;
  bool OverridesRestrictParameter(std::string* parameter) override;

  DISALLOW_COPY_AND_ASSIGN(IOSChromeVariationsServiceClient);
};

#endif  // IOS_CHROME_BROWSER_VARIATIONS_IOS_CHROME_VARIATIONS_SERVICE_CLIENT_H_

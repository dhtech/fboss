/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/hw/bcm/BcmControlPlane.h"
#include "fboss/agent/hw/bcm/BcmPortQueueManager.h"

namespace facebook { namespace fboss {

BcmControlPlane::BcmControlPlane(BcmSwitch* hw)
  : hw_(hw), gport_(0), queueManager_(std::make_unique<BcmPortQueueManager>(hw, "", 0)) {}

void BcmControlPlane::setupQueue(const std::shared_ptr<PortQueue>& /*queue*/) {}

void BcmControlPlane::setupRxReasonToQueue(
  const ControlPlane::RxReasonToQueue& /*reasonToQueue*/) {}

void BcmControlPlane::updateQueueCounters() {}

}} // facebook::fboss

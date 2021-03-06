// Ekam Build System
// Author: Kenton Varda (kenton@sandstorm.io)
// Copyright (c) 2010-2015 Kenton Varda, Google Inc., and contributors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Action.h"

namespace ekam {

BuildContext::~BuildContext() noexcept(false) {}
Action::~Action() {}
ActionFactory::~ActionFactory() {}

const int BuildContext::INSTALL_LOCATION_COUNT;
const char* const BuildContext::INSTALL_LOCATION_NAMES[INSTALL_LOCATION_COUNT] = {
  "bin", "lib", "node_modules"
};

}  // namespace ekam

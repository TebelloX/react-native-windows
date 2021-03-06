// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once

#include <Views/ViewPanel.h>

#include "ViewControl.g.h"

namespace winrt::PROJECT_ROOT_NAMESPACE::implementation {

//
// ViewControl is a ContentControl that ViewViewManager uses to wrap a ViewPanel
// when we want that ViewPanel to be keyboard focusable
//
struct ViewControl : ViewControlT<ViewControl> {
  using Super = ViewControlT<ViewControl>;

 public:
  // Constructors
  ViewControl();

  xaml::Automation::Peers::AutomationPeer OnCreateAutomationPeer();

  winrt::PROJECT_ROOT_NAMESPACE::ViewPanel GetPanel() const;
};

} // namespace winrt::PROJECT_ROOT_NAMESPACE::implementation

namespace winrt::PROJECT_ROOT_NAMESPACE::factory_implementation {
struct ViewControl : ViewControlT<ViewControl, implementation::ViewControl> {};
} // namespace winrt::PROJECT_ROOT_NAMESPACE::factory_implementation

//
//  ACFramework.h
//  ACFramework
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for ACFramework.
FOUNDATION_EXPORT double AdaptiveCardsFrameworkVersionNumber;

//! Project version string for AFramework.
FOUNDATION_EXPORT const unsigned char AdaptiveCarsFrameworkVersionString[];
#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACOActionOverflow.h"
#import "ACOAdaptiveCard.h"
#import "ACOAdaptiveCardParseResult.h"
#import "ACOBaseActionElement.h"
#import "ACOBaseCardElement.h"
#import "ACOEnums.h"
#import "ACOHostConfig.h"
#import "ACOHostConfigParseResult.h"
#import "ACOIResourceResolver.h"
#import "ACOInputResults.h"
#import "ACOMediaEvent.h"
#import "ACORemoteResourceInformation.h"
#import "ACORenderContext.h"
#import "ACOResourceResolvers.h"
#import "ACRActionDelegate.h"
#import "ACRActionOpenURLRenderer.h"
#import "ACRActionSetRenderer.h"
#import "ACRActionShowCardRenderer.h"
#import "ACRActionSubmitRenderer.h"
#import "ACRAggregateTarget.h"
#import "ACRBaseActionElementRenderer.h"
#import "ACRBaseCardElementRenderer.h"
#import "ACRBaseTarget.h"
#import "ACRButton.h"
#import "ACRChoiceSetCompactStyleView.h"
#import "ACRColumnRenderer.h"
#import "ACRColumnSetRenderer.h"
#import "ACRContainerRenderer.h"
#import "ACRContentHoldingUIView.h"
#import "ACRErrors.h"
#import "ACRFactSetRenderer.h"
#import "ACRIBaseActionElementRenderer.h"
#import "ACRIBaseCardElementRenderer.h"
#import "ACRIBaseInputHandler.h"
#import "ACRIMedia.h"
#import "ACRImageProperties.h"
#import "ACRImageRenderer.h"
#import "ACRImageSetRenderer.h"
#import "ACRInputChoiceSetRenderer.h"
#import "ACRInputDateRenderer.h"
#import "ACRInputLabelView.h"
#import "ACRInputNumberRenderer.h"
#import "ACRInputRenderer.h"
#import "ACRInputTimeRenderer.h"
#import "ACRInputToggleRenderer.h"
#import "ACRMediaRenderer.h"
#import "ACRMediaTarget.h"
#import "ACROverflowTarget.h"
#import "ACRParseWarning.h"
#import "ACRRegistration.h"
#import "ACRRenderResult.h"
#import "ACRRenderer.h"
#import "ACRRichTextBlockRenderer.h"
#import "ACRTableCellRenderer.h"
#import "ACRTableRenderer.h"
#import "ACRTableRow.h"
#import "ACRTableView.h"
#import "ACRTapGestureRecognizerEventHandler.h"
#import "ACRTapGestureRecognizerFactory.h"
#import "ACRTextBlockRenderer.h"
#import "ACRTextInputHandler.h"
#import "ACRTextView.h"
#import "ACRToggleInputView.h"
#import "ACRView.h"
#else
/// Cocoapods Imports
#ifdef SWIFT_PACKAGE
#import "ACOActionOverflow.h"
#else
#import "ACOActionOverflow.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOAdaptiveCard.h"
#else
#import "ACOAdaptiveCard.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOAdaptiveCardParseResult.h"
#else
#import "ACOAdaptiveCardParseResult.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOBaseCardElement.h"
#else
#import "ACOBaseCardElement.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOEnums.h"
#else
#import "ACOEnums.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOHostConfig.h"
#else
#import "ACOHostConfig.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOHostConfigParseResult.h"
#else
#import "ACOHostConfigParseResult.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOIResourceResolver.h"
#else
#import "ACOIResourceResolver.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOInputResults.h"
#else
#import "ACOInputResults.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOMediaEvent.h"
#else
#import "ACOMediaEvent.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACORemoteResourceInformation.h"
#else
#import "ACORemoteResourceInformation.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACORenderContext.h"
#else
#import "ACORenderContext.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACOResourceResolvers.h"
#else
#import "ACOResourceResolvers.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionDelegate.h"
#else
#import "ACRActionDelegate.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionOpenURLRenderer.h"
#else
#import "ACRActionOpenURLRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionSetRenderer.h"
#else
#import "ACRActionSetRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionShowCardRenderer.h"
#else
#import "ACRActionShowCardRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionSubmitRenderer.h"
#else
#import "ACRActionSubmitRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRAggregateTarget.h"
#else
#import "ACRAggregateTarget.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRBaseActionElementRenderer.h"
#else
#import "ACRBaseActionElementRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRBaseCardElementRenderer.h"
#else
#import "ACRBaseCardElementRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRBaseTarget.h"
#else
#import "ACRBaseTarget.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRButton.h"
#else
#import "ACRButton.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRChoiceSetCompactStyleView.h"
#else
#import "ACRChoiceSetCompactStyleView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRColumnRenderer.h"
#else
#import "ACRColumnRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRColumnSetRenderer.h"
#else
#import "ACRColumnSetRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRContainerRenderer.h"
#else
#import "ACRContainerRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRContentHoldingUIView.h"
#else
#import "ACRContentHoldingUIView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRErrors.h"
#else
#import "ACRErrors.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRFactSetRenderer.h"
#else
#import "ACRFactSetRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseActionElementRenderer.h"
#else
#import "ACRIBaseActionElementRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseCardElementRenderer.h"
#else
#import "ACRIBaseCardElementRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseInputHandler.h"
#else
#import "ACRIBaseInputHandler.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIMedia.h"
#else
#import "ACRIMedia.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRImageProperties.h"
#else
#import "ACRImageProperties.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRImageRenderer.h"
#else
#import "ACRImageRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRImageSetRenderer.h"
#else
#import "ACRImageSetRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputChoiceSetRenderer.h"
#else
#import "ACRInputChoiceSetRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputDateRenderer.h"
#else
#import "ACRInputDateRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputLabelView.h"
#else
#import "ACRInputLabelView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputNumberRenderer.h"
#else
#import "ACRInputNumberRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputRenderer.h"
#else
#import "ACRInputRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputTimeRenderer.h"
#else
#import "ACRInputTimeRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputToggleRenderer.h"
#else
#import "ACRInputToggleRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRMediaRenderer.h"
#else
#import "ACRMediaRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRMediaTarget.h"
#else
#import "ACRMediaTarget.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACROverflowTarget.h"
#else
#import "ACROverflowTarget.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRParseWarning.h"
#else
#import "ACRParseWarning.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRegistration.h"
#else
#import "ACRRegistration.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRenderResult.h"
#else
#import "ACRRenderResult.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRenderer.h"
#else
#import "ACRRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRichTextBlockRenderer.h"
#else
#import "ACRRichTextBlockRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableCellRenderer.h"
#else
#import "ACRTableCellRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableRenderer.h"
#else
#import "ACRTableRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableRow.h"
#else
#import "ACRTableRow.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableView.h"
#else
#import "ACRTableView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTapGestureRecognizerEventHandler.h"
#else
#import "ACRTapGestureRecognizerEventHandler.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTapGestureRecognizerFactory.h"
#else
#import "ACRTapGestureRecognizerFactory.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextBlockRenderer.h"
#else
#import "ACRTextBlockRenderer.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextInputHandler.h"
#else
#import "ACRTextInputHandler.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextView.h"
#else
#import "ACRTextView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRToggleInputView.h"
#else
#import "ACRToggleInputView.h"
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import "ACRView.h"
#endif

#endif

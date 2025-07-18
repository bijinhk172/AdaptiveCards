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
#import <AdaptiveCards/ACOActionOverflow.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOAdaptiveCard.h"
#else
#import <AdaptiveCards/ACOAdaptiveCard.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOAdaptiveCardParseResult.h"
#else
#import <AdaptiveCards/ACOAdaptiveCardParseResult.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOBaseCardElement.h"
#else
#import <AdaptiveCards/ACOBaseCardElement.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOEnums.h"
#else
#import <AdaptiveCards/ACOEnums.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOHostConfig.h"
#else
#import <AdaptiveCards/ACOHostConfig.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOHostConfigParseResult.h"
#else
#import <AdaptiveCards/ACOHostConfigParseResult.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOIResourceResolver.h"
#else
#import <AdaptiveCards/ACOIResourceResolver.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOInputResults.h"
#else
#import <AdaptiveCards/ACOInputResults.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOMediaEvent.h"
#else
#import <AdaptiveCards/ACOMediaEvent.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACORemoteResourceInformation.h"
#else
#import <AdaptiveCards/ACORemoteResourceInformation.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACORenderContext.h"
#else
#import <AdaptiveCards/ACORenderContext.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACOResourceResolvers.h"
#else
#import <AdaptiveCards/ACOResourceResolvers.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionDelegate.h"
#else
#import <AdaptiveCards/ACRActionDelegate.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionOpenURLRenderer.h"
#else
#import <AdaptiveCards/ACRActionOpenURLRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionSetRenderer.h"
#else
#import <AdaptiveCards/ACRActionSetRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionShowCardRenderer.h"
#else
#import <AdaptiveCards/ACRActionShowCardRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRActionSubmitRenderer.h"
#else
#import <AdaptiveCards/ACRActionSubmitRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRAggregateTarget.h"
#else
#import <AdaptiveCards/ACRAggregateTarget.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRBaseActionElementRenderer.h"
#else
#import <AdaptiveCards/ACRBaseActionElementRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRBaseCardElementRenderer.h"
#else
#import <AdaptiveCards/ACRBaseCardElementRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRBaseTarget.h"
#else
#import <AdaptiveCards/ACRBaseTarget.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRButton.h"
#else
#import <AdaptiveCards/ACRButton.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRChoiceSetCompactStyleView.h"
#else
#import <AdaptiveCards/ACRChoiceSetCompactStyleView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRColumnRenderer.h"
#else
#import <AdaptiveCards/ACRColumnRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRColumnSetRenderer.h"
#else
#import <AdaptiveCards/ACRColumnSetRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRContainerRenderer.h"
#else
#import <AdaptiveCards/ACRContainerRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRContentHoldingUIView.h"
#else
#import <AdaptiveCards/ACRContentHoldingUIView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRErrors.h"
#else
#import <AdaptiveCards/ACRErrors.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRFactSetRenderer.h"
#else
#import <AdaptiveCards/ACRFactSetRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseActionElementRenderer.h"
#else
#import <AdaptiveCards/ACRIBaseActionElementRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseCardElementRenderer.h"
#else
#import <AdaptiveCards/ACRIBaseCardElementRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIBaseInputHandler.h"
#else
#import <AdaptiveCards/ACRIBaseInputHandler.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRIMedia.h"
#else
#import <AdaptiveCards/ACRIMedia.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRImageProperties.h"
#else
#import <AdaptiveCards/ACRImageProperties.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRImageRenderer.h"
#else
#import <AdaptiveCards/ACRImageRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRImageSetRenderer.h"
#else
#import <AdaptiveCards/ACRImageSetRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputChoiceSetRenderer.h"
#else
#import <AdaptiveCards/ACRInputChoiceSetRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputDateRenderer.h"
#else
#import <AdaptiveCards/ACRInputDateRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputLabelView.h"
#else
#import <AdaptiveCards/ACRInputLabelView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputNumberRenderer.h"
#else
#import <AdaptiveCards/ACRInputNumberRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputRenderer.h"
#else
#import <AdaptiveCards/ACRInputRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputTimeRenderer.h"
#else
#import <AdaptiveCards/ACRInputTimeRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRInputToggleRenderer.h"
#else
#import <AdaptiveCards/ACRInputToggleRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRMediaRenderer.h"
#else
#import <AdaptiveCards/ACRMediaRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRMediaTarget.h"
#else
#import <AdaptiveCards/ACRMediaTarget.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACROverflowTarget.h"
#else
#import <AdaptiveCards/ACROverflowTarget.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRParseWarning.h"
#else
#import <AdaptiveCards/ACRParseWarning.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRegistration.h"
#else
#import <AdaptiveCards/ACRRegistration.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRenderResult.h"
#else
#import <AdaptiveCards/ACRRenderResult.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRenderer.h"
#else
#import <AdaptiveCards/ACRRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRRichTextBlockRenderer.h"
#else
#import <AdaptiveCards/ACRRichTextBlockRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableCellRenderer.h"
#else
#import <AdaptiveCards/ACRTableCellRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableRenderer.h"
#else
#import <AdaptiveCards/ACRTableRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableRow.h"
#else
#import <AdaptiveCards/ACRTableRow.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTableView.h"
#else
#import <AdaptiveCards/ACRTableView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTapGestureRecognizerEventHandler.h"
#else
#import <AdaptiveCards/ACRTapGestureRecognizerEventHandler.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTapGestureRecognizerFactory.h"
#else
#import <AdaptiveCards/ACRTapGestureRecognizerFactory.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextBlockRenderer.h"
#else
#import <AdaptiveCards/ACRTextBlockRenderer.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextInputHandler.h"
#else
#import <AdaptiveCards/ACRTextInputHandler.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRTextView.h"
#else
#import <AdaptiveCards/ACRTextView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRToggleInputView.h"
#else
#import <AdaptiveCards/ACRToggleInputView.h>
#endif
#ifdef SWIFT_PACKAGE
#import "ACRView.h"
#else
#import <AdaptiveCards/ACRView.h>
#endif

#endif

#ifdef SWIFT_PACKAGE
/// Swift Package Imports
#import "ACRRegistration.h"
#import "FeatureRegistration.h"
#else
/// Cocoapods Imports
#include "ACRRegistration.h"
#include "FeatureRegistration.h"
#endif

using namespace AdaptiveCards;

@interface ACRRegistration ()

- (BOOL)shouldUseResourceResolverForOverridenDefaultElementRenderers:(ACRCardElementType)cardElementType;

- (BOOL)shouldUseResourceResolverForOverridenDefaultActionRenderers:(ACRActionType)actionType;

@end

@interface ACOFeatureRegistration ()

- (std::shared_ptr<FeatureRegistration>)getSharedFeatureRegistration;

@end

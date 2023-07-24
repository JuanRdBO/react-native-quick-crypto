
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNQuickCryptoSpec.h"

@interface QuickCrypto : NSObject <NativeQuickCryptoSpec>
#else
#import <React/RCTBridgeModule.h>

@interface QuickCrypto : NSObject <RCTBridgeModule>
#endif

@end

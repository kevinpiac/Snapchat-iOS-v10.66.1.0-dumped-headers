//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SCCommerceCheckoutLaunching;

@interface SCCommerceLaunchCheckoutServices : NSObject
{
    id <SCCommerceCheckoutLaunching> _checkoutLauncher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCCommerceCheckoutLaunching> checkoutLauncher; // @synthesize checkoutLauncher=_checkoutLauncher;
- (id)initWithCheckoutLauncher:(id)arg1;

@end


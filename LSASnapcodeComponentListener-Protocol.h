//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSASnapcodeComponent, LSASnapcodeScannedData;

@protocol LSASnapcodeComponentListener <NSObject>
- (void)snapcodeComponent:(LSASnapcodeComponent *)arg1 didFindSnapcode:(LSASnapcodeScannedData *)arg2;
- (void)snapcodeComponentDidLoseSnapcode:(LSASnapcodeComponent *)arg1;
- (void)snapcodeComponentDidRequestToTriggerAction:(LSASnapcodeComponent *)arg1;
@end


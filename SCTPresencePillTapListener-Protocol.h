//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SCTPresenceController;

@protocol SCTPresencePillTapListener <NSObject>
- (void)presencePillTapped:(id <SCTPresenceController>)arg1 username:(NSString *)arg2 longPressed:(_Bool)arg3 completion:(void (^)(void))arg4;
@end


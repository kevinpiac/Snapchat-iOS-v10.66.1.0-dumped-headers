//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLSNetworkClient, NSError, NSString;

@protocol CLSNetworkClientDelegate <NSObject>
- (_Bool)networkClientCanUseBackgroundSessions:(CLSNetworkClient *)arg1;

@optional
- (void)networkClient:(CLSNetworkClient *)arg1 didFinishUploadWithPath:(NSString *)arg2 error:(NSError *)arg3;
@end


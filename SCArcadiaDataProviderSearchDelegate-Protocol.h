//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCArcadiaDataProvider;

@protocol SCArcadiaDataProviderSearchDelegate <NSObject>
- (void)arcadiaDataProvider:(SCArcadiaDataProvider *)arg1 didFetchObjects:(NSArray *)arg2 forQuery:(NSString *)arg3 nextCursor:(NSString *)arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class CLLocation, NSDictionary;
@protocol SCLocationDataControllerDelegate;

@protocol SCLocationDataController <NSCoding, NSObject>
- (void)clearCache;
@property(nonatomic) __weak id <SCLocationDataControllerDelegate> delegate;
- (void)processResponse:(NSDictionary *)arg1 location:(CLLocation *)arg2;
- (void)updateCacheWithLocation:(CLLocation *)arg1 newSession:(_Bool)arg2;
@end


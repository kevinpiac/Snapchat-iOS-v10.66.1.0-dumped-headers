//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUClientProperty <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *lastUpdatedAppVersion;
@property(readonly, copy, nonatomic) NSString *lastUpdatedPlatform;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *value;
@end

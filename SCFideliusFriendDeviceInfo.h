//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface SCFideliusFriendDeviceInfo : NSObject
{
    NSString *_theirOutBeta;
    NSString *_userId;
    NSData *_mystique;
    NSNumber *_version;
    NSNumber *_timestamp;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithTheirOutBeta:(id)arg1 userId:(id)arg2 mystique:(id)arg3 version:(id)arg4 timestamp:(id)arg5;
@property(copy, nonatomic) NSData *mystique; // @synthesize mystique=_mystique;
@property(copy, nonatomic) NSString *theirOutBeta; // @synthesize theirOutBeta=_theirOutBeta;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;

@end


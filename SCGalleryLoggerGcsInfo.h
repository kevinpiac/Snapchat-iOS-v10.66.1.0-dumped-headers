//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface SCGalleryLoggerGcsInfo : NSObject
{
    NSDate *_beginTime;
    NSString *_snapId;
    NSURL *_gcsURL;
    long long _objectType;
    unsigned long long _dataSizeInBytes;
}

+ (id)gcsPath:(id)arg1;
+ (id)host:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, nonatomic) unsigned long long dataSizeInBytes; // @synthesize dataSizeInBytes=_dataSizeInBytes;
- (id)description;
@property(readonly, nonatomic) NSString *gcsPath;
@property(readonly, nonatomic) NSURL *gcsURL; // @synthesize gcsURL=_gcsURL;
@property(readonly, nonatomic) NSString *host;
- (id)initWithBeginTime:(id)arg1 snapId:(id)arg2 gcsURL:(id)arg3 objectType:(long long)arg4 dataSizeInBytes:(unsigned long long)arg5;
@property(readonly, nonatomic) long long objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;

@end


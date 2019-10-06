//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCDiscoverOperaSessionLoggingContext : NSObject
{
    NSString *_trackingId;
    long long _viewLocation;
    NSString *_collectionId;
    long long _collectionType;
    long long _collectionPosition;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
@property(readonly, nonatomic) long long collectionPosition; // @synthesize collectionPosition=_collectionPosition;
@property(readonly, nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
- (id)initWithTrackingId:(id)arg1 viewLocation:(long long)arg2 collectionId:(id)arg3 collectionType:(long long)arg4 collectionPosition:(long long)arg5;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, nonatomic) long long viewLocation; // @synthesize viewLocation=_viewLocation;

@end


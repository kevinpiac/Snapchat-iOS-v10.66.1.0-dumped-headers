//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface SCDataHandlerMetadata : NSObject
{
    _Bool _wasLoadedOnce;
    _Bool _needsUpdate;
    NSDate *_lastRefreshDate;
    NSDictionary *_nextPageInfo;
}

- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(retain, nonatomic) NSDictionary *nextPageInfo; // @synthesize nextPageInfo=_nextPageInfo;
- (id)serializeMetadataWithError:(id *)arg1;
@property(nonatomic) _Bool wasLoadedOnce; // @synthesize wasLoadedOnce=_wasLoadedOnce;
- (_Bool)updateFromSerializedMetadata:(id)arg1 error:(id *)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCGallerySearchRequest;
@protocol OS_dispatch_queue;

@interface SCGalleryTakenNearbySearchRequestItem : NSObject
{
    SCGallerySearchRequest *_request;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) SCGallerySearchRequest *request; // @synthesize request=_request;

@end


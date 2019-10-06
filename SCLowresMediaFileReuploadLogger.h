//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SCPerforming;

@interface SCLowresMediaFileReuploadLogger : NSObject
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_snapIdToThumbnailInfo;
}

- (void).cxx_destruct;
- (void)_logWithThumbnailInfo:(id)arg1;
- (void)commitUpdatedThumbnailForSnapId:(id)arg1 didSucceed:(_Bool)arg2;
- (id)initWithPerformer:(id)arg1;
- (void)uploadThumbnailForSnapId:(id)arg1 didReceivedGcsResponse:(unsigned long long)arg2;
- (void)uploadThumbnailForSnapId:(id)arg1 triggeredBy:(unsigned long long)arg2;

@end


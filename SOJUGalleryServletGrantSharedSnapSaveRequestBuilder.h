//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUGallerySnapSource;

@interface SOJUGalleryServletGrantSharedSnapSaveRequestBuilder : NSObject
{
    SOJUGallerySnapSource *_source;
    NSNumber *_entrySource;
    NSString *_entryExternalId;
}

+ (id)withJUGalleryServletGrantSharedSnapSaveRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEntryExternalId:(id)arg1;
- (id)setEntrySource:(id)arg1;
- (id)setEntrySourceEnum:(long long)arg1;
- (id)setEntrySourceValue:(int)arg1;
- (id)setSource:(id)arg1;

@end


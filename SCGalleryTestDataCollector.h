//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer, SCSessionRequestManager;

@interface SCGalleryTestDataCollector : NSObject
{
    SCQueuePerformer *_performer;
    SCSessionRequestManager *_requestManager;
}

- (void).cxx_destruct;
- (id)_galleryInjectionSourceTypeMapping:(long long)arg1;
- (void)_showMessage:(id)arg1;
- (id)initWithRequestManager:(id)arg1;
- (void)uploadEntries:(id)arg1;

@end


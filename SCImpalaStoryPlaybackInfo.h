//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSURL;

@interface SCImpalaStoryPlaybackInfo : NSObject <NSCopying>
{
    _Bool _showPeekingViewersList;
    _Bool _appearWithExpandedViewersList;
    _Bool _saveable;
    _Bool _allowSaveEntireStory;
    _Bool _reportable;
    _Bool _profileEnabled;
    int _deleteAction;
    NSURL *_metricsURL;
    NSNumber *_reach;
    NSNumber *_screenshots;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowSaveEntireStory; // @synthesize allowSaveEntireStory=_allowSaveEntireStory;
@property(readonly, nonatomic) _Bool appearWithExpandedViewersList; // @synthesize appearWithExpandedViewersList=_appearWithExpandedViewersList;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) int deleteAction; // @synthesize deleteAction=_deleteAction;
- (unsigned long long)hash;
- (id)initWithMetricsURL:(id)arg1 reach:(id)arg2 screenshots:(id)arg3 showPeekingViewersList:(_Bool)arg4 appearWithExpandedViewersList:(_Bool)arg5 deleteAction:(int)arg6 saveable:(_Bool)arg7 allowSaveEntireStory:(_Bool)arg8 reportable:(_Bool)arg9 profileEnabled:(_Bool)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *metricsURL; // @synthesize metricsURL=_metricsURL;
@property(readonly, nonatomic) _Bool profileEnabled; // @synthesize profileEnabled=_profileEnabled;
@property(readonly, copy, nonatomic) NSNumber *reach; // @synthesize reach=_reach;
@property(readonly, nonatomic) _Bool reportable; // @synthesize reportable=_reportable;
@property(readonly, nonatomic) _Bool saveable; // @synthesize saveable=_saveable;
@property(readonly, copy, nonatomic) NSNumber *screenshots; // @synthesize screenshots=_screenshots;
@property(readonly, nonatomic) _Bool showPeekingViewersList; // @synthesize showPeekingViewersList=_showPeekingViewersList;

@end


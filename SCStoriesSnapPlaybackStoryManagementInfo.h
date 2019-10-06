//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoriesSnapPlaybackStoryManagementInfo : NSObject <NSCopying>
{
    _Bool _shouldShowViewersList;
    _Bool _isSaveable;
    _Bool _isDeletable;
    long long _postingState;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithShouldShowViewersList:(_Bool)arg1 isSaveable:(_Bool)arg2 isDeletable:(_Bool)arg3 postingState:(long long)arg4;
@property(readonly, nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSaveable; // @synthesize isSaveable=_isSaveable;
@property(readonly, nonatomic) long long postingState; // @synthesize postingState=_postingState;
@property(readonly, nonatomic) _Bool shouldShowViewersList; // @synthesize shouldShowViewersList=_shouldShowViewersList;

@end


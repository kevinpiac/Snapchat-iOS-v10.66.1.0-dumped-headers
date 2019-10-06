//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCDiscoverFeedManagementIconViewModel;

@interface SCDiscoverFeedManagementHiddenChannelViewModel : NSObject <NSCopying>
{
    _Bool _isOfficial;
    NSString *_hiddenChannelTitle;
    SCDiscoverFeedManagementIconViewModel *_iconViewModel;
    SCActionModel *_tapActionModel;
    SCActionModel *_unhideButtonActionModel;
    SCActionModel *_longPressActionModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *hiddenChannelTitle; // @synthesize hiddenChannelTitle=_hiddenChannelTitle;
@property(readonly, copy, nonatomic) SCDiscoverFeedManagementIconViewModel *iconViewModel; // @synthesize iconViewModel=_iconViewModel;
- (id)initWithHiddenChannelTitle:(id)arg1 isOfficial:(_Bool)arg2 iconViewModel:(id)arg3 tapActionModel:(id)arg4 unhideButtonActionModel:(id)arg5 longPressActionModel:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCActionModel *unhideButtonActionModel; // @synthesize unhideButtonActionModel=_unhideButtonActionModel;

@end

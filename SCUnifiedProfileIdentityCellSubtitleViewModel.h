//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel, SCUnifiedSplitTextViewModel;

@interface SCUnifiedProfileIdentityCellSubtitleViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCUnifiedSplitTextViewModel *_tappableSplitTextViewModel_foregroundSplitTextViewModel;
    SCUnifiedSplitTextViewModel *_tappableSplitTextViewModel_backgroundSplitTextViewModel;
    SCUnifiedSplitTextViewModel *_actionableSplitTextViewModel_splitTextViewModel;
    SCActionModel *_actionableSplitTextViewModel_tapActionModel;
    SCActionModel *_actionableSplitTextViewModel_animationActionModel;
}

+ (id)actionableSplitTextViewModelWithSplitTextViewModel:(id)arg1 tapActionModel:(id)arg2 animationActionModel:(id)arg3;
+ (id)tappableSplitTextViewModelWithForegroundSplitTextViewModel:(id)arg1 backgroundSplitTextViewModel:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchTappableSplitTextViewModel:(CDUnknownBlockType)arg1 actionableSplitTextViewModel:(CDUnknownBlockType)arg2;

@end


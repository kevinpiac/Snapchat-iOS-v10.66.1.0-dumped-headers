//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSAttributedString, SCLensExplorerLensItem, UIColor;

@interface SCLensExplorerLensCellViewModel : NSObject <NSCopying, NSCoding>
{
    _Bool _isDebugEnabled;
    _Bool _selected;
    SCLensExplorerLensItem *_lensItem;
    unsigned long long _cellType;
    UIColor *_color;
    NSAttributedString *_creatorUserName;
    NSAttributedString *_lensName;
    double _debugButtonCornerPadding;
    struct CGSize _debugButtonSize;
    struct CGSize _fullCellSize;
    struct CGSize _previewSize;
    struct CGSize _iconSize;
}

+ (id)cellViewModelWithLensExplorerItem:(id)arg1 configuration:(id)arg2 index:(unsigned long long)arg3 selected:(_Bool)arg4;
+ (id)colorForIndex:(unsigned long long)arg1;
+ (id)loadingCellViewModelWithConfiguration:(id)arg1;
+ (id)selectedCellViewModelWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *creatorUserName; // @synthesize creatorUserName=_creatorUserName;
@property(readonly, nonatomic) double debugButtonCornerPadding; // @synthesize debugButtonCornerPadding=_debugButtonCornerPadding;
@property(readonly, nonatomic) struct CGSize debugButtonSize; // @synthesize debugButtonSize=_debugButtonSize;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) struct CGSize fullCellSize; // @synthesize fullCellSize=_fullCellSize;
- (unsigned long long)hash;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithLensItem:(id)arg1 cellType:(unsigned long long)arg2 color:(id)arg3 creatorUserName:(id)arg4 lensName:(id)arg5 debugButtonSize:(struct CGSize)arg6 debugButtonCornerPadding:(double)arg7 isDebugEnabled:(_Bool)arg8 fullCellSize:(struct CGSize)arg9 previewSize:(struct CGSize)arg10 iconSize:(struct CGSize)arg11 selected:(_Bool)arg12;
@property(readonly, nonatomic) _Bool isDebugEnabled; // @synthesize isDebugEnabled=_isDebugEnabled;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLensExplorerLensItem *lensItem; // @synthesize lensItem=_lensItem;
@property(readonly, copy, nonatomic) NSAttributedString *lensName; // @synthesize lensName=_lensName;
@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(readonly, nonatomic) _Bool selected; // @synthesize selected=_selected;

@end


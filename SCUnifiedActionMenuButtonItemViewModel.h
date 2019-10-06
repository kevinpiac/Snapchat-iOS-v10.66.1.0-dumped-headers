//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSString, SCActionModel;

@interface SCUnifiedActionMenuButtonItemViewModel : NSObject <NSCopying>
{
    NSAttributedString *_attributedLabel;
    NSString *_buttonIconAsset;
    SCActionModel *_actionModel;
    struct CGSize _buttonIconSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, copy, nonatomic) NSAttributedString *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
@property(readonly, copy, nonatomic) NSString *buttonIconAsset; // @synthesize buttonIconAsset=_buttonIconAsset;
@property(readonly, nonatomic) struct CGSize buttonIconSize; // @synthesize buttonIconSize=_buttonIconSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAttributedLabel:(id)arg1 buttonIconAsset:(id)arg2 buttonIconSize:(struct CGSize)arg3 actionModel:(id)arg4;
- (_Bool)isEqual:(id)arg1;

@end


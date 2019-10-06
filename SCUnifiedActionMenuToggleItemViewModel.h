//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel;

@interface SCUnifiedActionMenuToggleItemViewModel : NSObject <NSCopying>
{
    NSAttributedString *_attributedLabel;
    long long _toggleState;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, copy, nonatomic) NSAttributedString *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAttributedLabel:(id)arg1 toggleState:(long long)arg2 actionModel:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long toggleState; // @synthesize toggleState=_toggleState;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCUnifiedActionMenuSelectionItemViewModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    NSString *_label;
    SCActionModel *_actionModel;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLabel:(id)arg1 isSelected:(_Bool)arg2 actionModel:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;

@end


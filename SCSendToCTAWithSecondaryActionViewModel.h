//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCActionModel, UIImage;

@interface SCSendToCTAWithSecondaryActionViewModel : NSObject <NSCopying>
{
    NSAttributedString *_labelText;
    UIImage *_leftImage;
    UIImage *_rightImage;
    SCActionModel *_primaryTapActionModel;
    SCActionModel *_secondaryTapActionModel;
    double _cellHeight;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLabelText:(id)arg1 leftImage:(id)arg2 rightImage:(id)arg3 primaryTapActionModel:(id)arg4 secondaryTapActionModel:(id)arg5 cellHeight:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *labelText; // @synthesize labelText=_labelText;
@property(readonly, copy, nonatomic) UIImage *leftImage; // @synthesize leftImage=_leftImage;
@property(readonly, copy, nonatomic) SCActionModel *primaryTapActionModel; // @synthesize primaryTapActionModel=_primaryTapActionModel;
@property(readonly, copy, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(readonly, copy, nonatomic) SCActionModel *secondaryTapActionModel; // @synthesize secondaryTapActionModel=_secondaryTapActionModel;

@end


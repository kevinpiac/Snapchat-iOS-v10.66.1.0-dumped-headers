//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCSendToShareSnapViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowSeparatorLine;
    NSString *_labelText;
    NSString *_image;
    SCActionModel *_tapActionModel;
    double _cellHeight;
    unsigned long long _numberOfCellInOneRow;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *image; // @synthesize image=_image;
- (id)initWithLabelText:(id)arg1 image:(id)arg2 tapActionModel:(id)arg3 cellHeight:(double)arg4 shouldShowSeparatorLine:(_Bool)arg5 numberOfCellInOneRow:(unsigned long long)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(readonly, nonatomic) unsigned long long numberOfCellInOneRow; // @synthesize numberOfCellInOneRow=_numberOfCellInOneRow;
@property(readonly, nonatomic) _Bool shouldShowSeparatorLine; // @synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;

@end

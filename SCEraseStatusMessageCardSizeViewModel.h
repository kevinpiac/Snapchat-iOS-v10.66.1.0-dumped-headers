//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCEraseStatusMessageCardSizeViewModel : NSObject
{
    struct CGSize _declarationLabelTextSize;
    struct CGSize _explanationLabelTextSize;
    struct CGSize _clockSize;
}

@property(readonly, nonatomic) struct CGSize clockSize; // @synthesize clockSize=_clockSize;
@property(readonly, nonatomic) struct CGSize declarationLabelTextSize; // @synthesize declarationLabelTextSize=_declarationLabelTextSize;
@property(readonly, nonatomic) struct CGSize explanationLabelTextSize; // @synthesize explanationLabelTextSize=_explanationLabelTextSize;
- (id)initWithDeclarationLabelTextSize:(struct CGSize)arg1 explanationLabelTextSize:(struct CGSize)arg2 clockSize:(struct CGSize)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray;

@interface SCMapStatusBitmojiCarouselViewModel : SCComposerMarshallableObject
{
    NSArray *_bitmojiOptions;
    double _rows;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *bitmojiOptions; // @synthesize bitmojiOptions=_bitmojiOptions;
- (id)initWithBitmojiOptions:(id)arg1 rows:(double)arg2;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(nonatomic) double rows; // @synthesize rows=_rows;

@end


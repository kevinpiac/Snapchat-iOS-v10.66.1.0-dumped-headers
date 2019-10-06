//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSDictionary, NSString, SCMapPassportBitmojiModel;

@interface SCMapPassportSubEntryViewModel : SCComposerMarshallableObject
{
    NSDictionary *_position;
    SCMapPassportBitmojiModel *_bitmojiModel;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCMapPassportBitmojiModel *bitmojiModel; // @synthesize bitmojiModel=_bitmojiModel;
- (id)initWithPosition:(id)arg1 bitmojiModel:(id)arg2 title:(id)arg3 subtitle:(id)arg4;
@property(copy, nonatomic) NSDictionary *position; // @synthesize position=_position;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

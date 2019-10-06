//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSArray, SCLSIDebugInfoMetadata, SCLSIImageData;

@interface SCLSIDebugInfoComponentViewModel : SCComposerMarshallableObject
{
    SCLSIImageData *_image;
    SCLSIDebugInfoMetadata *_metadata;
    NSArray *_analyzerSections;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *analyzerSections; // @synthesize analyzerSections=_analyzerSections;
@property(retain, nonatomic) SCLSIImageData *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 metadata:(id)arg2 analyzerSections:(id)arg3;
@property(retain, nonatomic) SCLSIDebugInfoMetadata *metadata; // @synthesize metadata=_metadata;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber;

@interface SCEventCreationViewModel : SCComposerMarshallableObject
{
    NSNumber *_keyboardHeight;
}

- (void).cxx_destruct;
- (id)initWithKeyboardHeight:(id)arg1;
@property(retain, nonatomic) NSNumber *keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;

@end

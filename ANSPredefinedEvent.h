//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ANSEvent.h"

@class ANSAttributeDictionary, NSString;

@interface ANSPredefinedEvent : ANSEvent
{
    NSString *_predefinedEventName;
    ANSAttributeDictionary *_predefinedAttributes;
    ANSAttributeDictionary *_customAttributes;
}

+ (id)addToCartEventWithPrice:(id)arg1 currency:(id)arg2 itemName:(id)arg3 itemType:(id)arg4 itemId:(id)arg5 customAttributes:(id)arg6;
+ (id)contentViewEventWithName:(id)arg1 contentType:(id)arg2 contentId:(id)arg3 customAttributes:(id)arg4;
+ (id)inviteEventWithMethod:(id)arg1 customAttributes:(id)arg2;
+ (id)levelEndEventWithLevelName:(id)arg1 score:(id)arg2 success:(id)arg3 customAttributes:(id)arg4;
+ (id)levelStartEventWithLevelName:(id)arg1 customAttributes:(id)arg2;
+ (id)loginEventWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3;
+ (id)purchaseEventWithPrice:(id)arg1 currency:(id)arg2 success:(id)arg3 itemName:(id)arg4 itemType:(id)arg5 itemId:(id)arg6 customAttributes:(id)arg7;
+ (id)ratingEventWithRating:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5;
+ (id)searchEventWithQuery:(id)arg1 customAttributes:(id)arg2;
+ (id)shareEventWithMethod:(id)arg1 contentName:(id)arg2 contentType:(id)arg3 contentId:(id)arg4 customAttributes:(id)arg5;
+ (id)signUpEventWithMethod:(id)arg1 success:(id)arg2 customAttributes:(id)arg3;
+ (id)startCheckoutEventWithPrice:(id)arg1 currency:(id)arg2 itemCount:(id)arg3 customAttributes:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) ANSAttributeDictionary *customAttributes; // @synthesize customAttributes=_customAttributes;
- (id)description;
- (id)dictionaryRepresentation;
- (id)name;
@property(retain, nonatomic) ANSAttributeDictionary *predefinedAttributes; // @synthesize predefinedAttributes=_predefinedAttributes;
@property(retain, nonatomic) NSString *predefinedEventName; // @synthesize predefinedEventName=_predefinedEventName;

@end


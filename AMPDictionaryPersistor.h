//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPFileSystem;

@interface AMPDictionaryPersistor : NSObject
{
    AMPFileSystem *_fileSystem;
}

- (void).cxx_destruct;
- (id)clearDictionariesInDir:(id)arg1;
- (id)dictionariesInDir:(id)arg1;
- (id)dictionaryAtPath:(id)arg1;
@property(retain, nonatomic) AMPFileSystem *fileSystem; // @synthesize fileSystem=_fileSystem;
- (id)initWithFileSystem:(id)arg1;
- (void)saveDictionary:(id)arg1 toPath:(id)arg2;

@end

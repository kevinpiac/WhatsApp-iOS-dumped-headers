//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAMimeTypes : NSObject
{
}

+ (_Bool)isSupportedVideoMIMEType:(id)arg1;
+ (_Bool)isSupportedImageMIMEType:(id)arg1;
+ (_Bool)isSupportedAudioMIMEType:(id)arg1;
+ (id)localizedDescriptionForMIMEType:(id)arg1;
+ (id)MIMETypeFromMIMETypeString:(id)arg1;
+ (id)allSupportedMIMETypes;
+ (id)allSupportedTypeIdentifiers;
+ (id)MIMETypeForDocumentType:(id)arg1;
+ (id)MIMETypeForExtension:(id)arg1;
+ (id)extensionForMIMEType:(id)arg1;
+ (id)extensionForTypeIdentifier:(id)arg1;
+ (id)typeIdentifierForExtension:(id)arg1;
+ (void)initialize;

@end

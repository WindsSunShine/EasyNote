//
//  NoteModel.h
//  EasyNote
//
//  Created by Tengfei on 15/12/6.
//  Copyright © 2015年 tengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NoteModel : NSObject

/**
 *  时间 ： 创建时间/修改时间
 */
@property (nonatomic,copy)NSString * time;
/**
 *  便签标题
 */
@property (nonatomic,copy)NSString * title;
/**
 *  便签内容
 */
@property (nonatomic,copy)NSString * content;


@end
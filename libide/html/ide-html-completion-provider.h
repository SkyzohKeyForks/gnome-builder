/* ide-html-completion-provider.h
 *
 * Copyright (C) 2014 Christian Hergert <christian@hergert.me>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef IDE_HTML_COMPLETION_PROVIDER_H
#define IDE_HTML_COMPLETION_PROVIDER_H

#include <gtksourceview/gtksource.h>

G_BEGIN_DECLS

#define IDE_TYPE_HTML_COMPLETION_PROVIDER (ide_html_completion_provider_get_type())

G_DECLARE_FINAL_TYPE (IdeHtmlCompletionProvider, ide_html_completion_provider,
                      IDE, HTML_COMPLETION_PROVIDER, GObject)
G_END_DECLS

#endif /* IDE_HTML_COMPLETION_PROVIDER_H */
